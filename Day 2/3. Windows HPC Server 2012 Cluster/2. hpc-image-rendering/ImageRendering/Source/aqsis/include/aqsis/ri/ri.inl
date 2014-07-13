
/*==============================================================================
 * Autogenerated file.  Edit xml and xsl source to modify.
 *
 * Sections correspond to the RISpec version 3.2, with some extensions.
 *============================================================================*/
		
/* ========== Section 3: Relationship to the RenderMan Shading Language ========== */
		AQSIS_RI_SHARE RtToken RiDeclare( RtString name, RtString declaration );

/* ========== Section 4: Graphics State ========== */
		AQSIS_RI_SHARE RtVoid RiBegin( RtToken name );
		AQSIS_RI_SHARE RtVoid RiEnd(  );
		AQSIS_RI_SHARE RtContextHandle RiGetContext(  );
		AQSIS_RI_SHARE RtVoid RiContext( RtContextHandle handle );
		AQSIS_RI_SHARE RtVoid RiFrameBegin( RtInt number );
		AQSIS_RI_SHARE RtVoid RiFrameEnd(  );
		AQSIS_RI_SHARE RtVoid RiWorldBegin(  );
		AQSIS_RI_SHARE RtVoid RiWorldEnd(  );

	/* ----- Conditional RIB ----- */
		AQSIS_RI_SHARE RtVoid RiIfBegin( RtString condition );
		AQSIS_RI_SHARE RtVoid RiElseIf( RtString condition );
		AQSIS_RI_SHARE RtVoid RiElse(  );
		AQSIS_RI_SHARE RtVoid RiIfEnd(  );

	/* ----- Options ----- */

		/* Camera */
		AQSIS_RI_SHARE RtVoid RiFormat( RtInt xresolution, RtInt yresolution, RtFloat pixelaspectratio );
		AQSIS_RI_SHARE RtVoid RiFrameAspectRatio( RtFloat frameratio );
		AQSIS_RI_SHARE RtVoid RiScreenWindow( RtFloat left, RtFloat right, RtFloat bottom, RtFloat top );
		AQSIS_RI_SHARE RtVoid RiCropWindow( RtFloat xmin, RtFloat xmax, RtFloat ymin, RtFloat ymax );
		AQSIS_RI_SHARE RtVoid RiProjection( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiProjectionV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiClipping( RtFloat cnear, RtFloat cfar );
		AQSIS_RI_SHARE RtVoid RiClippingPlane( RtFloat x, RtFloat y, RtFloat z, RtFloat nx, RtFloat ny, RtFloat nz );
		AQSIS_RI_SHARE RtVoid RiDepthOfField( RtFloat fstop, RtFloat focallength, RtFloat focaldistance );
		AQSIS_RI_SHARE RtVoid RiShutter( RtFloat opentime, RtFloat closetime );

		/* Displays */
		AQSIS_RI_SHARE RtVoid RiPixelVariance( RtFloat variance );
		AQSIS_RI_SHARE RtVoid RiPixelSamples( RtFloat xsamples, RtFloat ysamples );
		AQSIS_RI_SHARE RtVoid RiPixelFilter( RtFilterFunc function, RtFloat xwidth, RtFloat ywidth );
		AQSIS_RI_SHARE RtVoid RiExposure( RtFloat gain, RtFloat gamma );
		AQSIS_RI_SHARE RtVoid RiImager( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiImagerV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiQuantize( RtToken type, RtInt one, RtInt min, RtInt max, RtFloat ditheramplitude );
		AQSIS_RI_SHARE RtVoid RiDisplay( RtToken name, RtToken type, RtToken mode, ... );
		AQSIS_RI_SHARE RtVoid RiDisplayV( RtToken name, RtToken type, RtToken mode, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtFloat RiGaussianFilter( RtFloat x, RtFloat y, RtFloat xwidth, RtFloat ywidth );
		AQSIS_RI_SHARE RtFloat RiBoxFilter( RtFloat x, RtFloat y, RtFloat xwidth, RtFloat ywidth );
		AQSIS_RI_SHARE RtFloat RiMitchellFilter( RtFloat x, RtFloat y, RtFloat xwidth, RtFloat ywidth );
		AQSIS_RI_SHARE RtFloat RiTriangleFilter( RtFloat x, RtFloat y, RtFloat xwidth, RtFloat ywidth );
		AQSIS_RI_SHARE RtFloat RiCatmullRomFilter( RtFloat x, RtFloat y, RtFloat xwidth, RtFloat ywidth );
		AQSIS_RI_SHARE RtFloat RiSincFilter( RtFloat x, RtFloat y, RtFloat xwidth, RtFloat ywidth );
		AQSIS_RI_SHARE RtFloat RiDiskFilter( RtFloat x, RtFloat y, RtFloat xwidth, RtFloat ywidth );
		AQSIS_RI_SHARE RtFloat RiBesselFilter( RtFloat x, RtFloat y, RtFloat xwidth, RtFloat ywidth );

		/* Additional options */
		AQSIS_RI_SHARE RtVoid RiHider( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiHiderV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiColorSamples( RtInt N, RtFloat nRGB[], RtFloat RGBn[] );
		AQSIS_RI_SHARE RtVoid RiRelativeDetail( RtFloat relativedetail );

		/* Implementation-specific options */
		AQSIS_RI_SHARE RtVoid RiOption( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiOptionV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );

	/* ----- Attributes ----- */
		AQSIS_RI_SHARE RtVoid RiAttributeBegin(  );
		AQSIS_RI_SHARE RtVoid RiAttributeEnd(  );

		/* Color and opacity */
		AQSIS_RI_SHARE RtVoid RiColor( RtColor Cq );
		AQSIS_RI_SHARE RtVoid RiOpacity( RtColor Os );

		/* Texture coordinates */
		AQSIS_RI_SHARE RtVoid RiTextureCoordinates( RtFloat s1, RtFloat t1, RtFloat s2, RtFloat t2, RtFloat s3, RtFloat t3, RtFloat s4, RtFloat t4 );

		/* Light sources */
		AQSIS_RI_SHARE RtLightHandle RiLightSource( RtToken name, ... );
		AQSIS_RI_SHARE RtLightHandle RiLightSourceV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtLightHandle RiAreaLightSource( RtToken name, ... );
		AQSIS_RI_SHARE RtLightHandle RiAreaLightSourceV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiIlluminate( RtLightHandle light, RtBoolean onoff );

		/* Surface shading */
		AQSIS_RI_SHARE RtVoid RiSurface( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiSurfaceV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );

		/* Displacement shading */
		AQSIS_RI_SHARE RtVoid RiDeformation( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiDeformationV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiDisplacement( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiDisplacementV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );

		/* Volume shading */
		AQSIS_RI_SHARE RtVoid RiAtmosphere( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiAtmosphereV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiInterior( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiInteriorV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiExterior( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiExteriorV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );

		/* Layered Shaders */
		AQSIS_RI_SHARE RtVoid RiShaderLayer( RtToken type, RtToken name, RtToken layername, ... );
		AQSIS_RI_SHARE RtVoid RiShaderLayerV( RtToken type, RtToken name, RtToken layername, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiConnectShaderLayers( RtToken type, RtToken layer1, RtToken variable1, RtToken layer2, RtToken variable2 );

		/* Shading rate */
		AQSIS_RI_SHARE RtVoid RiShadingRate( RtFloat size );

		/* Shading interpolation */
		AQSIS_RI_SHARE RtVoid RiShadingInterpolation( RtToken type );

		/* Matte objects */
		AQSIS_RI_SHARE RtVoid RiMatte( RtBoolean onoff );

		/* Bound */
		AQSIS_RI_SHARE RtVoid RiBound( RtBound bound );

		/* Detail */
		AQSIS_RI_SHARE RtVoid RiDetail( RtBound bound );
		AQSIS_RI_SHARE RtVoid RiDetailRange( RtFloat offlow, RtFloat onlow, RtFloat onhigh, RtFloat offhigh );

		/* Geometric approximation */
		AQSIS_RI_SHARE RtVoid RiGeometricApproximation( RtToken type, RtFloat value );

		/* Orientation and sides */
		AQSIS_RI_SHARE RtVoid RiOrientation( RtToken orientation );
		AQSIS_RI_SHARE RtVoid RiReverseOrientation(  );
		AQSIS_RI_SHARE RtVoid RiSides( RtInt nsides );

	/* ----- Transformations ----- */
		AQSIS_RI_SHARE RtVoid RiIdentity(  );
		AQSIS_RI_SHARE RtVoid RiTransform( RtMatrix transform );
		AQSIS_RI_SHARE RtVoid RiConcatTransform( RtMatrix transform );
		AQSIS_RI_SHARE RtVoid RiPerspective( RtFloat fov );
		AQSIS_RI_SHARE RtVoid RiTranslate( RtFloat dx, RtFloat dy, RtFloat dz );
		AQSIS_RI_SHARE RtVoid RiRotate( RtFloat angle, RtFloat dx, RtFloat dy, RtFloat dz );
		AQSIS_RI_SHARE RtVoid RiScale( RtFloat sx, RtFloat sy, RtFloat sz );
		AQSIS_RI_SHARE RtVoid RiSkew( RtFloat angle, RtFloat dx1, RtFloat dy1, RtFloat dz1, RtFloat dx2, RtFloat dy2, RtFloat dz2 );

		/* Named coordinate systems */
		AQSIS_RI_SHARE RtVoid RiCoordinateSystem( RtToken space );
		AQSIS_RI_SHARE RtVoid RiCoordSysTransform( RtToken space );
		AQSIS_RI_SHARE RtPoint* RiTransformPoints( RtToken fromspace, RtToken tospace, RtInt npoints, RtPoint points[] );

		/* Transformation stack */
		AQSIS_RI_SHARE RtVoid RiTransformBegin(  );
		AQSIS_RI_SHARE RtVoid RiTransformEnd(  );

	/* ----- Resources ----- */
		AQSIS_RI_SHARE RtVoid RiResource( RtToken handle, RtToken type, ... );
		AQSIS_RI_SHARE RtVoid RiResourceV( RtToken handle, RtToken type, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiResourceBegin(  );
		AQSIS_RI_SHARE RtVoid RiResourceEnd(  );

	/* ----- Implementation-specific Attributes ----- */
		AQSIS_RI_SHARE RtVoid RiAttribute( RtToken name, ... );
		AQSIS_RI_SHARE RtVoid RiAttributeV( RtToken name, RtInt count, RtToken tokens[], RtPointer values[] );

/* ========== Section 5: Geometric Primitives ========== */

	/* ----- Polygons ----- */
		AQSIS_RI_SHARE RtVoid RiPolygon( RtInt nvertices, ... );
		AQSIS_RI_SHARE RtVoid RiPolygonV( RtInt nvertices, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiGeneralPolygon( RtInt nloops, RtInt nverts[], ... );
		AQSIS_RI_SHARE RtVoid RiGeneralPolygonV( RtInt nloops, RtInt nverts[], RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiPointsPolygons( RtInt npolys, RtInt nverts[], RtInt verts[], ... );
		AQSIS_RI_SHARE RtVoid RiPointsPolygonsV( RtInt npolys, RtInt nverts[], RtInt verts[], RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiPointsGeneralPolygons( RtInt npolys, RtInt nloops[], RtInt nverts[], RtInt verts[], ... );
		AQSIS_RI_SHARE RtVoid RiPointsGeneralPolygonsV( RtInt npolys, RtInt nloops[], RtInt nverts[], RtInt verts[], RtInt count, RtToken tokens[], RtPointer values[] );

	/* ----- Patches ----- */
		AQSIS_RI_SHARE RtVoid RiBasis( RtBasis ubasis, RtInt ustep, RtBasis vbasis, RtInt vstep );
		AQSIS_RI_SHARE RtVoid RiPatch( RtToken type, ... );
		AQSIS_RI_SHARE RtVoid RiPatchV( RtToken type, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiPatchMesh( RtToken type, RtInt nu, RtToken uwrap, RtInt nv, RtToken vwrap, ... );
		AQSIS_RI_SHARE RtVoid RiPatchMeshV( RtToken type, RtInt nu, RtToken uwrap, RtInt nv, RtToken vwrap, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiNuPatch( RtInt nu, RtInt uorder, RtFloat uknot[], RtFloat umin, RtFloat umax, RtInt nv, RtInt vorder, RtFloat vknot[], RtFloat vmin, RtFloat vmax, ... );
		AQSIS_RI_SHARE RtVoid RiNuPatchV( RtInt nu, RtInt uorder, RtFloat uknot[], RtFloat umin, RtFloat umax, RtInt nv, RtInt vorder, RtFloat vknot[], RtFloat vmin, RtFloat vmax, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiTrimCurve( RtInt nloops, RtInt ncurves[], RtInt order[], RtFloat knot[], RtFloat min[], RtFloat max[], RtInt n[], RtFloat u[], RtFloat v[], RtFloat w[] );

	/* ----- Subdivision Surfaces ----- */
		AQSIS_RI_SHARE RtVoid RiSubdivisionMesh( RtToken scheme, RtInt nfaces, RtInt nvertices[], RtInt vertices[], RtInt ntags, RtToken tags[], RtInt nargs[], RtInt intargs[], RtFloat floatargs[], ... );
		AQSIS_RI_SHARE RtVoid RiSubdivisionMeshV( RtToken scheme, RtInt nfaces, RtInt nvertices[], RtInt vertices[], RtInt ntags, RtToken tags[], RtInt nargs[], RtInt intargs[], RtFloat floatargs[], RtInt count, RtToken tokens[], RtPointer values[] );

	/* ----- Quadrics ----- */
		AQSIS_RI_SHARE RtVoid RiSphere( RtFloat radius, RtFloat zmin, RtFloat zmax, RtFloat thetamax, ... );
		AQSIS_RI_SHARE RtVoid RiSphereV( RtFloat radius, RtFloat zmin, RtFloat zmax, RtFloat thetamax, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiCone( RtFloat height, RtFloat radius, RtFloat thetamax, ... );
		AQSIS_RI_SHARE RtVoid RiConeV( RtFloat height, RtFloat radius, RtFloat thetamax, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiCylinder( RtFloat radius, RtFloat zmin, RtFloat zmax, RtFloat thetamax, ... );
		AQSIS_RI_SHARE RtVoid RiCylinderV( RtFloat radius, RtFloat zmin, RtFloat zmax, RtFloat thetamax, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiHyperboloid( RtPoint point1, RtPoint point2, RtFloat thetamax, ... );
		AQSIS_RI_SHARE RtVoid RiHyperboloidV( RtPoint point1, RtPoint point2, RtFloat thetamax, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiParaboloid( RtFloat rmax, RtFloat zmin, RtFloat zmax, RtFloat thetamax, ... );
		AQSIS_RI_SHARE RtVoid RiParaboloidV( RtFloat rmax, RtFloat zmin, RtFloat zmax, RtFloat thetamax, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiDisk( RtFloat height, RtFloat radius, RtFloat thetamax, ... );
		AQSIS_RI_SHARE RtVoid RiDiskV( RtFloat height, RtFloat radius, RtFloat thetamax, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiTorus( RtFloat majorrad, RtFloat minorrad, RtFloat phimin, RtFloat phimax, RtFloat thetamax, ... );
		AQSIS_RI_SHARE RtVoid RiTorusV( RtFloat majorrad, RtFloat minorrad, RtFloat phimin, RtFloat phimax, RtFloat thetamax, RtInt count, RtToken tokens[], RtPointer values[] );

	/* ----- Points and Curve Primitives ----- */
		AQSIS_RI_SHARE RtVoid RiPoints( RtInt npoints, ... );
		AQSIS_RI_SHARE RtVoid RiPointsV( RtInt npoints, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiCurves( RtToken type, RtInt ncurves, RtInt nvertices[], RtToken wrap, ... );
		AQSIS_RI_SHARE RtVoid RiCurvesV( RtToken type, RtInt ncurves, RtInt nvertices[], RtToken wrap, RtInt count, RtToken tokens[], RtPointer values[] );

	/* ----- Blobby Implicit Surfaces ----- */
		AQSIS_RI_SHARE RtVoid RiBlobby( RtInt nleaf, RtInt ncode, RtInt code[], RtInt nflt, RtFloat flt[], RtInt nstr, RtToken str[], ... );
		AQSIS_RI_SHARE RtVoid RiBlobbyV( RtInt nleaf, RtInt ncode, RtInt code[], RtInt nflt, RtFloat flt[], RtInt nstr, RtToken str[], RtInt count, RtToken tokens[], RtPointer values[] );

	/* ----- Procedural Primitives ----- */
		AQSIS_RI_SHARE RtVoid RiProcedural( RtPointer data, RtBound bound, RtProcSubdivFunc refineproc, RtProcFreeFunc freeproc );
		AQSIS_RI_SHARE RtVoid RiProcFree( RtPointer data );
		AQSIS_RI_SHARE RtVoid RiProcDelayedReadArchive( RtPointer data, RtFloat detail );
		AQSIS_RI_SHARE RtVoid RiProcRunProgram( RtPointer data, RtFloat detail );
		AQSIS_RI_SHARE RtVoid RiProcDynamicLoad( RtPointer data, RtFloat detail );

	/* ----- Implementation-specific Geometric Primitives ----- */
		AQSIS_RI_SHARE RtVoid RiGeometry( RtToken type, ... );
		AQSIS_RI_SHARE RtVoid RiGeometryV( RtToken type, RtInt count, RtToken tokens[], RtPointer values[] );

	/* ----- Soids and Spatial Set Operations ----- */
		AQSIS_RI_SHARE RtVoid RiSolidBegin( RtToken type );
		AQSIS_RI_SHARE RtVoid RiSolidEnd(  );

	/* ----- Retained Geometry ----- */
		AQSIS_RI_SHARE RtObjectHandle RiObjectBegin(  );
		AQSIS_RI_SHARE RtVoid RiObjectEnd(  );
		AQSIS_RI_SHARE RtVoid RiObjectInstance( RtObjectHandle handle );

/* ========== Section 6: Motion ========== */
		AQSIS_RI_SHARE RtVoid RiMotionBegin( RtInt N,  ... );
		AQSIS_RI_SHARE RtVoid RiMotionBeginV( RtInt N, RtFloat times[] );
		AQSIS_RI_SHARE RtVoid RiMotionEnd(  );

/* ========== Section 7: External Resources ========== */

	/* ----- Texture Map Utilities ----- */

		/* Making texture maps */
		AQSIS_RI_SHARE RtVoid RiMakeTexture( RtString imagefile, RtString texturefile, RtToken swrap, RtToken twrap, RtFilterFunc filterfunc, RtFloat swidth, RtFloat twidth, ... );
		AQSIS_RI_SHARE RtVoid RiMakeTextureV( RtString imagefile, RtString texturefile, RtToken swrap, RtToken twrap, RtFilterFunc filterfunc, RtFloat swidth, RtFloat twidth, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiMakeBump( RtString imagefile, RtString bumpfile, RtToken swrap, RtToken twrap, RtFilterFunc filterfunc, RtFloat swidth, RtFloat twidth, ... );
		AQSIS_RI_SHARE RtVoid RiMakeBumpV( RtString imagefile, RtString bumpfile, RtToken swrap, RtToken twrap, RtFilterFunc filterfunc, RtFloat swidth, RtFloat twidth, RtInt count, RtToken tokens[], RtPointer values[] );

		/* Making environment maps */
		AQSIS_RI_SHARE RtVoid RiMakeLatLongEnvironment( RtString imagefile, RtString reflfile, RtFilterFunc filterfunc, RtFloat swidth, RtFloat twidth, ... );
		AQSIS_RI_SHARE RtVoid RiMakeLatLongEnvironmentV( RtString imagefile, RtString reflfile, RtFilterFunc filterfunc, RtFloat swidth, RtFloat twidth, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiMakeCubeFaceEnvironment( RtString px, RtString nx, RtString py, RtString ny, RtString pz, RtString nz, RtString reflfile, RtFloat fov, RtFilterFunc filterfunc, RtFloat swidth, RtFloat twidth, ... );
		AQSIS_RI_SHARE RtVoid RiMakeCubeFaceEnvironmentV( RtString px, RtString nx, RtString py, RtString ny, RtString pz, RtString nz, RtString reflfile, RtFloat fov, RtFilterFunc filterfunc, RtFloat swidth, RtFloat twidth, RtInt count, RtToken tokens[], RtPointer values[] );

		/* Making shadow maps */
		AQSIS_RI_SHARE RtVoid RiMakeShadow( RtString picfile, RtString shadowfile, ... );
		AQSIS_RI_SHARE RtVoid RiMakeShadowV( RtString picfile, RtString shadowfile, RtInt count, RtToken tokens[], RtPointer values[] );
		AQSIS_RI_SHARE RtVoid RiMakeOcclusion( RtInt npics, RtString picfiles[], RtString shadowfile, ... );
		AQSIS_RI_SHARE RtVoid RiMakeOcclusionV( RtInt npics, RtString picfiles[], RtString shadowfile, RtInt count, RtToken tokens[], RtPointer values[] );

	/* ----- Errors ----- */
		AQSIS_RI_SHARE RtVoid RiErrorHandler( RtErrorFunc handler );
		AQSIS_RI_SHARE RtVoid RiErrorIgnore( RtInt code, RtInt severity, RtString message );
		AQSIS_RI_SHARE RtVoid RiErrorPrint( RtInt code, RtInt severity, RtString message );
		AQSIS_RI_SHARE RtVoid RiErrorAbort( RtInt code, RtInt severity, RtString message );

	/* ----- Archive Files ----- */
		AQSIS_RI_SHARE RtVoid RiArchiveRecord( RtToken type, char * format,  ... );
		AQSIS_RI_SHARE RtVoid RiReadArchive( RtToken name, RtArchiveCallback callback, ... );
		AQSIS_RI_SHARE RtVoid RiReadArchiveV( RtToken name, RtArchiveCallback callback, RtInt count, RtToken tokens[], RtPointer values[] );
