// /Game/BP/Objects/World/Items/Deployables/Lights/BP_Spotlight_Tripod.BP_Spotlight_Tripod_C
// Derives from: ABP_Light_Electric_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Spotlight_Tripod_C : public ABP_Light_Electric_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x07E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FuelInventory;  // 0x07E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* Extinguish;  // 0x07F0, size 0x8

    UFUNCTION(BlueprintCallable) void Toggle();
};
