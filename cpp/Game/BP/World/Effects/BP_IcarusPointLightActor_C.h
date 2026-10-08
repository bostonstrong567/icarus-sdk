// /Game/BP/World/Effects/BP_IcarusPointLightActor.BP_IcarusPointLightActor_C
// Derives from: AActor > UObject
// size 0x240, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusPointLightActor_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor LightColor;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Intensity;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseTemperature;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Temperature;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CastShadows;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttenuationRadius;  // 0x023C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
