macro(get_sources SOURCE_LIST DIR)
    set(FOLDER_NAMES app gui player world)
    add_sources(${SOURCE_LIST} "${DIR}/sources" "${FOLDER_NAMES}")
endmacro()