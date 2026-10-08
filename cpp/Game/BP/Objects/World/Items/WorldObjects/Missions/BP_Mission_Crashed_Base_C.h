// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Crashed_Base.BP_Mission_Crashed_Base_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Crashed_Base_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Crashed_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
