// /Game/BP/Objects/World/Items/Deployables/Trophies/BP_Trophy_Scorpion_Boss_Tail.BP_Trophy_Scorpion_Boss_Tail_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_Scorpion_Boss_Tail_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Trophy_Scorpion_Boss_Tail(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
