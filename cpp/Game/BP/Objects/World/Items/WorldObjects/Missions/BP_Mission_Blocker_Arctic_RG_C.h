// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Blocker_Arctic_RG.BP_Mission_Blocker_Arctic_RG_C
// Derives from: ABP_Mission_Blocker_Base_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x378, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Blocker_Arctic_RG_C : public ABP_Mission_Blocker_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0370, size 0x8

    UFUNCTION(BlueprintCallable) void BlockerRemovedEvent();
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Blocker_Arctic_RG(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
