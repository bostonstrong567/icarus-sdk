// /Script/Icarus.PrefabCaveLight
// size 0x80, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefabFunctionLibrary.h

USTRUCT()
struct FPrefabCaveLight
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECaveLightType LightType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTrackSun;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SunlightPercentage;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor LightTint;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Intensity;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCastShadows;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VolumetricScatteringIntensity;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCastVolumetricShadow;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDrawDistance;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Temperature;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseTemperature;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttenuationRadius;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerConeAngle;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterConeAngle;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SourceRadius;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SourceWidth;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SourceHeight;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BarnDoorAngle;  // 0x0070, size 0x4
};
