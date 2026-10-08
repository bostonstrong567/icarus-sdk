// /Game/BP/World/Effects/BP_LavaLakeLight.BP_LavaLakeLight_C
// Derives from: AActor > UObject
// size 0x234, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LavaLakeLight_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightRadius;  // 0x0230, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
