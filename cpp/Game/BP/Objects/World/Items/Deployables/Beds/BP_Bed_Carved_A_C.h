// /Game/BP/Objects/World/Items/Deployables/Beds/BP_Bed_Carved_A.BP_Bed_Carved_A_C
// Derives from: ABP_Bed_Wood_C > ABP_BedBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x778, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Bed_Carved_A_C : public ABP_Bed_Wood_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0770, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Bed_Carved_A(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
