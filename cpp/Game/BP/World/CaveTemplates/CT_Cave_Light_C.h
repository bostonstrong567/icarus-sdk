// /Game/BP/World/CaveTemplates/CT_Cave_Light.CT_Cave_Light_C
// Derives from: AActor > UObject
// size 0x278, a blueprint class, blueprint

UCLASS(Config=Engine)
class ACT_Cave_Light_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECaveLightType LightType;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor LightColor;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Intensity;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VolumetricScatteringIntensity;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseTemperature;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Temperature;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDrawDistance;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CastShadows;  // 0x024C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CastVolumetricShadow;  // 0x024D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttenuationRadius;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerConeAngle;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterConeAngle;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SourceRadius;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SourceWidth;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SourceHeight;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BarnDoorAngle;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TrackSun;  // 0x026C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SunlightPercentage;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightFalloffExponent;  // 0x0274, size 0x4

    UFUNCTION(BlueprintCallable) void CheckTime();
    UFUNCTION() void ExecuteUbergraph_CT_Cave_Light(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
