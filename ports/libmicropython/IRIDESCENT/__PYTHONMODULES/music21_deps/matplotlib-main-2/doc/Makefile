# Minimal makefile for Sphinx documentation
#

# You can set these variables from the command line.
SPHINXOPTS    = -W --keep-going
SPHINXBUILD   = python -msphinx
SPHINXPROJ    = matplotlib
SOURCEDIR     = .
BUILDDIR      = build

# Put it first so that "make" without argument is like "make help".
help:
	@$(SPHINXBUILD) -M help "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)

.PHONY: help Makefile

# workaround because sphinx does not completely clean up (#11139)
clean:
	@$(SPHINXBUILD) -M clean "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)
	rm -rf "$(SOURCEDIR)/build"
	rm -rf "$(SOURCEDIR)/api/_as_gen"
	rm -rf "$(SOURCEDIR)/gallery"
	rm -rf "$(SOURCEDIR)/plot_types"
	rm -rf "$(SOURCEDIR)/tutorials"
	rm -rf "$(SOURCEDIR)/savefig"
	rm -rf "$(SOURCEDIR)/sphinxext/__pycache__"

show:
	@python -c "import webbrowser; webbrowser.open_new_tab('file://$(shell pwd)/build/html/index.html')"

html-noplot:
	$(SPHINXBUILD) -D plot_gallery=0 -b html $(SOURCEDIR) $(BUILDDIR)/html $(SPHINXOPTS) $(O)
	@echo
	@echo "Build finished. The HTML pages are in $(BUILDDIR)/html."

# Catch-all target: route all unknown targets to Sphinx using the new
# "make mode" option.  $(O) is meant as a shortcut for $(SPHINXOPTS).
%: Makefile
	@$(SPHINXBUILD) -M $@ "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)
