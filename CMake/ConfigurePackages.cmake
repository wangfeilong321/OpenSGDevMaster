
MACRO(OSG_CONFIGURE_ZLIB)

    IF(NOT OSG_USE_OSGSUPPORT_LIBS)

        OSG_FIND_PACKAGE(ZLIB_OpenSG)

        IF(ZLIB_FOUND)
          OSG_ADD_IMPORT_LIB(OSG_ZLIB_TARGETS ZLIB_LIBRARY)

          SET(ZLIB_LIBRARIES ${OSG_ZLIB_TARGETS} CACHE STRING "" FORCE)
        ENDIF(ZLIB_FOUND)

    ELSE(NOT OSG_USE_OSGSUPPORT_LIBS)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/include/zlib.h)
            SET(ZLIB_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
        ENDIF()

        IF(OSG_USE_STATIC_SUPPORT_LIBS)
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgzlib.lib)
                SET(ZLIB_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgzlib.lib)
            ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgzlibD.lib)
                SET(ZLIB_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgzlibD.lib)
            ENDIF()
        ELSE()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgzlib.lib)
                SET(ZLIB_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/osgzlib.lib)
            ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgzlibD.lib)
                SET(ZLIB_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/osgzlibD.lib)
            ENDIF()
        ENDIF()

        OSG_ADD_IMPORT_LIB(OSG_ZLIB_TARGETS ZLIB_LIBRARY)
        SET(ZLIB_LIBRARIES ${OSG_ZLIB_TARGETS} CACHE STRING "" FORCE)

        IF(ZLIB_INCLUDE_DIR)
            IF(ZLIB_LIBRARY_DEBUG OR ZLIB_LIBRARY_RELEASE)
                SET(ZLIB_FOUND TRUE)
            ENDIF()
        ENDIF()

    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS)

    IF(ZLIB_FOUND)
        OSG_SET(OSG_WITH_ZLIB 1)
    ENDIF(ZLIB_FOUND)

ENDMACRO(OSG_CONFIGURE_ZLIB)

MACRO(OSG_CONFIGURE_GLUT)

    IF(NOT OSG_USE_OSGSUPPORT_LIBS)

        OSG_FIND_PACKAGE(GLUT)

    ELSE(NOT OSG_USE_OSGSUPPORT_LIBS)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/include/GL/glut.h)
            SET(GLUT_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
        ENDIF()

        IF(OSG_USE_STATIC_SUPPORT_LIBS)
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgfreeglut.lib)
                SET(GLUT_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgfreeglut.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgfreeglutD.lib)
                SET(GLUT_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgfreeglutD.lib)
        ENDIF()
    ELSE()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgfreeglut.lib)
                SET(GLUT_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/osgfreeglut.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgfreeglutD.lib)
                SET(GLUT_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/osgfreeglutD.lib)
        ENDIF()
    ENDIF()

        OSG_ADD_IMPORT_LIB(OSG_GLUT_TARGETS GLUT_LIBRARY)
    SET(GLUT_LIBRARIES ${OSG_GLUT_TARGETS} CACHE STRING "" FORCE)

    IF(GLUT_INCLUDE_DIR)
        IF(GLUT_LIBRARY_DEBUG OR GLUT_LIBRARY_RELEASE)
            SET(GLUT_FOUND TRUE)
        ENDIF()
    ENDIF()

    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS)

ENDMACRO(OSG_CONFIGURE_GLUT)

MACRO(OSG_CONFIGURE_PNG)

    IF(NOT OSG_USE_OSGSUPPORT_LIBS)
        OSG_FIND_PACKAGE(PNG)
        SET(ZLIB_LIBRARY "ZLIB_LIBRARY-NOTFOUND" CACHE FILEPATH "" FORCE)
    ELSE(NOT OSG_USE_OSGSUPPORT_LIBS)

    IF(EXISTS ${OSG_SUPPORT_ROOT}/include/png.h)
        SET(PNG_PNG_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
    ENDIF()

    IF(OSG_USE_STATIC_SUPPORT_LIBS)
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgpng.lib)
                SET(PNG_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgpng.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgpngD.lib)
                SET(PNG_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgpngD.lib)
        ENDIF()
    ELSE()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgpng.lib)
                SET(PNG_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/osgpng.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgpngD.lib)
                SET(PNG_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/osgpngD.lib)
        ENDIF()
    ENDIF()

        OSG_ADD_IMPORT_LIB(OSG_PNG_TARGETS PNG_LIBRARY)
    SET(PNG_LIBRARIES ${OSG_PNG_TARGETS} CACHE STRING "" FORCE)

    IF(PNG_PNG_INCLUDE_DIR)
        IF(PNG_LIBRARY_DEBUG OR PNG_LIBRARY_RELEASE)
            SET(PNG_FOUND TRUE)
        ENDIF()
    ENDIF()

    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS)

ENDMACRO(OSG_CONFIGURE_PNG)

MACRO(OSG_CONFIGURE_TIFF)

    IF(NOT OSG_USE_OSGSUPPORT_LIBS)
        OSG_FIND_PACKAGE(TIFF)
    ELSE(NOT OSG_USE_OSGSUPPORT_LIBS)

    IF(EXISTS ${OSG_SUPPORT_ROOT}/include/tiff.h)
        SET(TIFF_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
    ENDIF()

    IF(OSG_USE_STATIC_SUPPORT_LIBS)
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgtiff.lib)
                SET(TIFF_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgtiff.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgtiffD.lib)
                SET(TIFF_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgtiffD.lib)
        ENDIF()
    ELSE()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgtiff.lib)
                SET(TIFF_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/osgtiff.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgtiffD.lib)
                SET(TIFF_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/osgtiffD.lib)
        ENDIF()
    ENDIF()

        OSG_ADD_IMPORT_LIB(OSG_TIFF_TARGETS TIFF_LIBRARY)
    SET(TIFF_LIBRARIES ${OSG_TIFF_TARGETS} CACHE STRING "" FORCE)

    IF(TIFF_INCLUDE_DIR)
        IF(TIFF_LIBRARY_DEBUG OR TIFF_LIBRARY_RELEASE)
            SET(TIFF_FOUND TRUE)
        ENDIF()
    ENDIF()

    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS)

ENDMACRO(OSG_CONFIGURE_TIFF)


MACRO(OSG_CONFIGURE_OPENEXR)

    IF(NOT OSG_USE_OSGSUPPORT_LIBS)
        OSG_FIND_PACKAGE(OpenEXR)

        IF(OPENEXR_FOUND)
          OSG_ADD_IMPORT_LIB(OSG_OPENEXR_TARGETS OPENEXR_LIBRARY_IMF)
          OSG_ADD_IMPORT_LIB(OSG_OPENEXR_TARGETS OPENEXR_LIBRARY_ILMTHREAD)
          OSG_ADD_IMPORT_LIB(OSG_OPENEXR_TARGETS OPENEXR_LIBRARY_IEX)
          OSG_ADD_IMPORT_LIB(OSG_OPENEXR_TARGETS OPENEXR_LIBRARY_HALF)

          SET(OPENEXR_LIBRARIES ${OSG_OPENEXR_TARGETS} CACHE STRING "" FORCE)
        ENDIF(OPENEXR_FOUND)
    ELSE(NOT OSG_USE_OSGSUPPORT_LIBS)

    IF(EXISTS ${OSG_SUPPORT_ROOT}/include/OpenEXR/ImfIO.h)
        SET(OPENEXR_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include;${OSG_SUPPORT_ROOT}/include/OpenEXR CACHE PATH "" FORCE)
    ENDIF()

        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgilmimf.lib)
            SET(OPENEXR_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgilmimf.lib)
        ENDIF()
        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgilmimfD.lib)
            SET(OPENEXR_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgilmimfD.lib)
    ENDIF()

        #      IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/)
        #        SET(OPENEXR__LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/)
        #     ENDIF()
        #      IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/)
        #        SET(OPENEXR__LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/)
        #     ENDIF()

        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgilmthread.lib)
            SET(OPENEXR_ILMTHREAD_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgilmthread.lib)
        ENDIF()
        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgilmthreadD.lib)
            SET(OPENEXR_ILMTHREAD_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgilmthreadD.lib)
        ENDIF()
        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgIex.lib)
            SET(OPENEXR_IEX_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgIex.lib)
        ENDIF()
        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgIexD.lib)
            SET(OPENEXR_IEX_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgIexD.lib)
        ENDIF()
        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgHalf.lib)
            SET(OPENEXR_HALF_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgHalf.lib)
        ENDIF()
        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgHalfD.lib)
            SET(OPENEXR_HALF_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgHalfD.lib)
        ENDIF()

        OSG_ADD_IMPORT_LIB(OSG_OPENEXR_TARGETS OPENEXR_LIBRARY)
        OSG_ADD_IMPORT_LIB(OSG_OPENEXR_TARGETS OPENEXR_ILMTHREAD_LIBRARY)
        OSG_ADD_IMPORT_LIB(OSG_OPENEXR_TARGETS OPENEXR_IEX_LIBRARY)
        OSG_ADD_IMPORT_LIB(OSG_OPENEXR_TARGETS OPENEXR_HALF_LIBRARY)

        SET(OPENEXR_LIBRARIES ${OSG_OPENEXR_TARGETS} CACHE STRING "" FORCE)

        IF(OPENEXR_INCLUDE_DIR)
          IF(OPENEXR_LIBRARY_DEBUG OR OPENEXR_LIBRARY_RELEASE)
            SET(OPENEXR_FOUND TRUE)
        ENDIF()
    ENDIF()

    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS)

ENDMACRO(OSG_CONFIGURE_OPENEXR)

MACRO(OSG_CONFIGURE_JPEG)

    IF(NOT OSG_USE_OSGSUPPORT_LIBS)
        OSG_FIND_PACKAGE(JPEG)
    ELSE(NOT OSG_USE_OSGSUPPORT_LIBS)

    IF(EXISTS ${OSG_SUPPORT_ROOT}/include/jpeglib.h)
        SET(JPEG_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
    ENDIF()

        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgjpg.lib)
            SET(JPEG_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgjpg.lib)
        ENDIF()
        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgjpgD.lib)
            SET(JPEG_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgjpgD.lib)
    ENDIF()

        OSG_ADD_IMPORT_LIB(OSG_JPEG_TARGETS JPEG_LIBRARY)
    SET(JPEG_LIBRARIES ${OSG_JPEG_TARGETS} CACHE STRING "" FORCE)

    IF(JPEG_INCLUDE_DIR)
        IF(JPEG_LIBRARY_DEBUG OR JPEG_LIBRARY_RELEASE)
            SET(JPEG_FOUND TRUE)
        ENDIF()
    ENDIF()

    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS)

ENDMACRO(OSG_CONFIGURE_JPEG)

MACRO(OSG_CONFIGURE_COLLADA)
    IF(NOT OSG_USE_OSGSUPPORT_LIBS)

        FIND_PACKAGE(Collada)

        SET(OSG_COLLADA_TARGETS)

        IF(COLLADA_FOUND)
          OSG_ADD_IMPORT_LIB(OSG_COLLADA_TARGETS COLLADA_LIBRARY)
        ENDIF(COLLADA_FOUND)

    ELSE(NOT OSG_USE_OSGSUPPORT_LIBS)

    IF(EXISTS ${OSG_SUPPORT_ROOT}/include/dae.h)
        SET(COLLADA_DAE_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
    ENDIF()
    IF(EXISTS ${OSG_SUPPORT_ROOT}/include/1.4/dom/domTypes.h)
        SET(COLLADA_DOM_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include/1.4 CACHE PATH "" FORCE)
    ENDIF()

    IF(OSG_USE_STATIC_SUPPORT_LIBS)
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgcollada14dom22.lib)
                SET(COLLADA_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgcollada14dom22.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgcollada14dom22D.lib)
                SET(COLLADA_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgcollada14dom22D.lib)
        ENDIF()

            #      IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/)
            #        SET(COLLADA_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/)
            #     ENDIF()
            #      IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/)
            #        SET(COLLADA_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/)
            #     ENDIF()

            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgxml2.lib)
                SET(COLLADA_XML2_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgxml2.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgxml2D.lib)
                SET(COLLADA_XML2_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgxml2D.lib)
        ENDIF()

            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgpcrecpp.lib)
                SET(COLLADA_PCRECPP_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgpcrecpp.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgpcrecppD.lib)
                SET(COLLADA_PCRECPP_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgpcrecppD.lib)
        ENDIF()

            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgminizip.lib)
                SET(COLLADA_MINIZIP_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgminizip.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgminizipD.lib)
                SET(COLLADA_MINIZIP_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgminizipD.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgiconv.lib)
                SET(COLLADA_ICONV_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgiconv.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgiconvD.lib)
                SET(COLLADA_ICONV_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgiconvD.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgpcre.lib)
                SET(COLLADA_PCRE_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgpcre.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgpcreD.lib)
                SET(COLLADA_PCRELIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgpcreD.lib)
        ENDIF()
    ELSE()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgcollada14dom22.lib)
                SET(COLLADA_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/osgcollada14dom22.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgcollada14dom22D.lib)
                SET(COLLADA_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/osgcollada14dom22D.lib)
        ENDIF()
    ENDIF()

        SET(OSG_COLLADA_TARGETS )

        OSG_ADD_IMPORT_LIB(OSG_COLLADA_TARGETS COLLADA_LIBRARY)

    IF(OSG_USE_STATIC_SUPPORT_LIBS)
            OSG_ADD_IMPORT_LIB(OSG_COLLADA_TARGETS COLLADA_XML2_LIBRARY)
            OSG_ADD_IMPORT_LIB(OSG_COLLADA_TARGETS COLLADA_PCRECPP_LIBRARY)
            OSG_ADD_IMPORT_LIB(OSG_COLLADA_TARGETS COLLADA_MINIZIP_LIBRARY)
            OSG_ADD_IMPORT_LIB(OSG_COLLADA_TARGETS COLLADA_ICONV_LIBRARY)
            OSG_ADD_IMPORT_LIB(OSG_COLLADA_TARGETS COLLADA_PCRE_LIBRARY)
    ENDIF(OSG_USE_STATIC_SUPPORT_LIBS)

        #   SET(COLLADA_LIBRARIES ${OSG_COLLADA_TARGETS} CACHE STRING "" FORCE)

    IF(COLLADA_DAE_INCLUDE_DIR AND COLLADA_DOM_INCLUDE_DIR)
        IF(COLLADA_LIBRARY_DEBUG OR COLLADA_LIBRARY_RELEASE)
            SET(COLLADA_FOUND TRUE)
        ENDIF()
    ENDIF()

    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS)
ENDMACRO(OSG_CONFIGURE_COLLADA)


MACRO(OSG_CONFIGURE_BOOST)
    SET(Boost_USE_MULTITHREADED ON )

    IF(NOT Boost_USE_STATIC_LIBS)
        SET(Boost_USE_STATIC_LIBS OFF CACHE INTERNAL "")
    ENDIF(NOT Boost_USE_STATIC_LIBS)

    FIND_PACKAGE(Boost COMPONENTS filesystem)

    IF(Boost_FOUND)

        INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR} )

        IF(UNIX)
            LINK_DIRECTORIES   (${Boost_LIBRARY_DIRS})
        ENDIF(UNIX)

        IF(NOT Boost_USE_STATIC_LIBS)
            ADD_DEFINITIONS(-DBOOST_ALL_DYN_LINK)
        ENDIF(NOT Boost_USE_STATIC_LIBS)

        IF(CMAKE_BUILD_TYPE STREQUAL "Debug" OR 
           CMAKE_BUILD_TYPE STREQUAL "DebugOpt")

            SET(OSG_BOOST_LIBS ${Boost_FILESYSTEM_LIBRARY_DEBUG})

        ELSE()

            SET(OSG_BOOST_LIBS ${Boost_FILESYSTEM_LIBRARY_RELEASE})

        ENDIF()

        SET(OSG_BOOST_INCDIRS ${Boost_INCLUDE_DIR})

        OSG_ADD_OPT(BOOST_ROOT)

        IF(WIN32)

            SET(OSG_BOOST_TARGETS )

            OSG_ADD_IMPORT_LIB(OSG_BOOST_TARGETS Boost_FILESYSTEM_LIBRARY)

            IF(${Boost_MINOR_VERSION} GREATER 34)
                FIND_PACKAGE(Boost COMPONENTS system)

                OSG_ADD_IMPORT_LIB(OSG_BOOST_TARGETS Boost_SYSTEM_LIBRARY)
            ENDIF()

            SET(OSG_BOOST_LIBS ${OSG_BOOST_TARGETS})

        ENDIF(WIN32)

        IF(APPLE)
            FIND_PACKAGE(Boost COMPONENTS system)
            SET(OSG_BOOST_LIBS ${OSG_BOOST_LIBS} ${Boost_SYSTEM_LIBRARY})
        ENDIF(APPLE)

    ELSE(Boost_FOUND)

        MESSAGE(SEND_ERROR "BOOST NOTFOUND." ${Boost_ERROR_REASON})

        IF(NOT BOOST_ROOT)
            SET(BOOST_ROOT "" CACHE PATH "")
        ENDIF(NOT BOOST_ROOT)

    ENDIF(Boost_FOUND)
ENDMACRO(OSG_CONFIGURE_BOOST)

MACRO(OSG_CONFIGURE_GLEW)

    IF(NOT OSG_USE_OSGSUPPORT_LIBS)

        OSG_FIND_PACKAGE(GLEW)

    ELSE(NOT OSG_USE_OSGSUPPORT_LIBS)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/include/GL/glew.h)
            SET(GLEW_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
        ENDIF()

        IF(OSG_USE_STATIC_SUPPORT_LIBS)
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgglew.lib)
                SET(GLEW_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/libosgglew.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/libosgglewD.lib)
                SET(GLEW_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/libosgglewD.lib)
        ENDIF()
    ELSE()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgglew.lib)
                SET(GLEW_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/osgglew.lib)
        ENDIF()
            IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgglewD.lib)
                SET(GLEW_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/osgglewD.lib)
        ENDIF()
    ENDIF()

        OSG_ADD_IMPORT_LIB(OSG_GLEW_TARGETS GLEW_LIBRARY)
    SET(GLEW_LIBRARIES ${OSG_GLEW_TARGETS} CACHE STRING "" FORCE)

    IF(GLEW_INCLUDE_DIR)
        IF(GLEW_LIBRARY_DEBUG OR GLEW_LIBRARY_RELEASE)
            SET(GLEW_FOUND TRUE)
        ENDIF()
    ENDIF()

    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS)

ENDMACRO(OSG_CONFIGURE_GLEW)

MACRO(OSG_ADD_GLUTPACKAGE OSG_DO_SETUP_TEST)
  IF("${OSG_DO_SETUP_TEST}" STREQUAL "ON" OR "${OSG_DO_SETUP_TEST}" STREQUAL "TRUE")
    SET(${PROJECT_NAME}_DEP_TEST_INCDIR ${${PROJECT_NAME}_DEP_TEST_INCDIR} OSG_GLUT_INC_DIR)

    IF(OSG_USE_OSGSUPPORT_LIBS AND OSG_USE_STATIC_SUPPORT_LIBS)
      SET(${PROJECT_NAME}_DEP_TEST_LIB ${${PROJECT_NAME}_DEP_TEST_LIB} GLUT_LIBRARIES)
      SET(${PROJECT_NAME}_DEP_TEST_DEFS ${${PROJECT_NAME}_DEP_TEST_DEFS};FREEGLUT_STATIC)
    ENDIF()
  ELSE()
    SET(${PROJECT_NAME}_DEP_LIB ${${PROJECT_NAME}_DEP_LIB} GLUT_LIBRARIES)
    SET(${PROJECT_NAME}_DEP_INCDIR ${${PROJECT_NAME}_DEP_INCDIR} OSG_GLUT_INC_DIR)

    IF(OSG_USE_OSGSUPPORT_LIBS AND OSG_USE_STATIC_SUPPORT_LIBS)
      SET(${PROJECT_NAME}_DEP_DEFS ${${PROJECT_NAME}_DEP_DEFS};FREEGLUT_STATIC)
    ENDIF()
  ENDIF()
ENDMACRO(OSG_ADD_GLUTPACKAGE SETUP_TEST)

MACRO(OSG_ADD_GLEWPACKAGE OSG_DO_SETUP_TEST)
  IF("${OSG_DO_SETUP_TEST}" STREQUAL "ON" OR "${OSG_DO_SETUP_TEST}" STREQUAL "TRUE")
    SET(${PROJECT_NAME}_DEP_TEST_INCDIR ${${PROJECT_NAME}_DEP_TEST_INCDIR} OSG_GLEW_INC_DIR)

    IF(OSG_USE_OSGSUPPORT_LIBS)
      SET(${PROJECT_NAME}_DEP_TEST_LIB ${${PROJECT_NAME}_DEP_TEST_LIB} GLEW_LIBRARIES)
      IF(AND OSG_USE_STATIC_SUPPORT_LIBS)
        SET(${PROJECT_NAME}_DEP_TEST_DEFS ${${PROJECT_NAME}_DEP_TEST_DEFS};GLEW_STATIC)
      ELSE()
        SET(${PROJECT_NAME}_DEP_TEST_DEFS ${${PROJECT_NAME}_DEP_TEST_DEFS};GLEW_BUILD)
      ENDIF()
    ENDIF()
  ELSE()
    SET(${PROJECT_NAME}_DEP_LIB ${${PROJECT_NAME}_DEP_LIB} GLEW_LIBRARIES)
    SET(${PROJECT_NAME}_DEP_INCDIR ${${PROJECT_NAME}_DEP_INCDIR} OSG_GLEW_INC_DIR)

    IF(OSG_USE_OSGSUPPORT_LIBS AND OSG_USE_STATIC_SUPPORT_LIBS)
      SET(${PROJECT_NAME}_DEP_DEFS ${${PROJECT_NAME}_DEP_DEFS};GLEW_STATIC)
    ELSE()
      SET(${PROJECT_NAME}_DEP_DEFS ${${PROJECT_NAME}_DEP_DEFS};GLEW_BUILD)
    ENDIF()
  ENDIF()
ENDMACRO(OSG_ADD_GLEWPACKAGE SETUP_TEST)
