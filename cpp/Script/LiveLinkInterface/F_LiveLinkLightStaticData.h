// /Script/LiveLinkInterface.LiveLinkLightStaticData
// size 0x28, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkLightTypes.h

USTRUCT()
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsTemperatureSupported;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsIntensitySupported;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsLightColorSupported;  // 0x001A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsInnerConeAngleSupported;  // 0x001B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsOuterConeAngleSupported;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsAttenuationRadiusSupported;  // 0x001D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsSourceLenghtSupported;  // 0x001E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsSourceRadiusSupported;  // 0x001F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsSoftSourceRadiusSupported;  // 0x0020, size 0x1
};
