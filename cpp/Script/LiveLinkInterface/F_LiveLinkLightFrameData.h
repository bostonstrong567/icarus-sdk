// /Script/LiveLinkInterface.LiveLinkLightFrameData
// size 0x100, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkLightTypes.h

USTRUCT()
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Temperature;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Intensity;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FColor LightColor;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float InnerConeAngle;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float OuterConeAngle;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AttenuationRadius;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SourceRadius;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SoftSourceRadius;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SourceLength;  // 0x00F0, size 0x4
};
