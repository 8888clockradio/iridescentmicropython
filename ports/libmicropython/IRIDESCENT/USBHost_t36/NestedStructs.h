#ifndef NestedStructs_DEFINED
#define NestedStructs_DEFINED 
typedef struct {
  uint8_t  signature[8];
  uint8_t  revision[4];
  uint8_t  headerSize[4];
  uint8_t  crc32[4];
  uint8_t  reserved[4];
  uint8_t  currentLBA[8];
  uint8_t  backupLBA[8];
  uint8_t  firstLBA[8];
  uint8_t  lastLBA[8];
  uint8_t  diskGUID[16];
  uint8_t  startLBAArray[8];
  uint8_t  numberPartitions[4];
  uint8_t  sizePartitionEntry[4];
  uint8_t  crc32PartitionEntries[4];
  uint8_t  unused[420]; // should be 0;
} GPTPartitionHeader_t;

typedef struct {
  uint8_t  partitionTypeGUID[16];
  uint8_t  uniqueGUID[16];
  uint8_t  firstLBA[8];
  uint8_t  lastLBA[8];
  uint8_t  attributeFlags[8];
  uint16_t name[36];
} GPTPartitionEntryItem_t;

typedef struct {
  GPTPartitionEntryItem_t items[4];
} GPTPartitionEntrySector_t;
//#endif

#endif
