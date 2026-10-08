// /Game/BP/Objects/World/Items/Deployables/Communication/BP_Dynamic_Mission_Beacon.BP_Dynamic_Mission_Beacon_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x739, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dynamic_Mission_Beacon_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool AddModifier;  // 0x0738, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Dynamic_Mission_Beacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void TriggerModifier();
};
