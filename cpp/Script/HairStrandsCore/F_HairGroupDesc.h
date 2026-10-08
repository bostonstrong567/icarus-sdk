// /Script/HairStrandsCore.HairGroupDesc
// size 0x44, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomDesc.h

USTRUCT()
struct FHairGroupDesc
{
    UPROPERTY() float HairLength;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairWidth;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HairWidth_Override;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairRootScale;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HairRootScale_Override;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairTipScale;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HairTipScale_Override;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairClipScale;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HairClipScale_Override;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairShadowDensity;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HairShadowDensity_Override;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairRaytracingRadiusScale;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HairRaytracingRadiusScale_Override;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseHairRaytracingGeometry;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseHairRaytracingGeometry_Override;  // 0x0032, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LODBias;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseStableRasterization;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseStableRasterization_Override;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bScatterSceneLighting;  // 0x003A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bScatterSceneLighting_Override;  // 0x003B, size 0x1
    UPROPERTY() bool bSupportVoxelization;  // 0x003C, size 0x1
    UPROPERTY() bool bSupportVoxelization_Override;  // 0x003D, size 0x1
    UPROPERTY() int32 LODForcedIndex;  // 0x0040, size 0x4
};
