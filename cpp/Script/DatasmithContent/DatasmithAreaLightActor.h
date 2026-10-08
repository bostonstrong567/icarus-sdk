// /Script/DatasmithContent.DatasmithAreaLightActor
// Derives from: AActor > UObject
// size 0x278, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithAreaLightActor.h

UCLASS(MinimalAPI, Config=Engine)
class ADatasmithAreaLightActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EComponentMobility> Mobility;  // 0x0220, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDatasmithAreaLightActorType LightType;  // 0x0221, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDatasmithAreaLightActorShape LightShape;  // 0x0222, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Dimensions;  // 0x0224, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Intensity;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELightUnits IntensityUnits;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Color;  // 0x0234, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Temperature;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureLightProfile* IESTexture;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseIESBrightness;  // 0x0250, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IESBrightnessScale;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x0258, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SourceRadius;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SourceLength;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttenuationRadius;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpotlightInnerAngle;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpotlightOuterAngle;  // 0x0274, size 0x4
};
