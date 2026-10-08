// /Game/BP/Objects/World/Items/Deployables/Lights/BP_CaveLight_Stick.BP_CaveLight_Stick_C
// Derives from: ABP_Battery_Light_Base_C > ABP_Light_Electric_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x810, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CaveLight_Stick_C : public ABP_Battery_Light_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x07F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FuelInventory_0;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* Extinguish_0;  // 0x0808, size 0x8
};
