// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Research_Voxel.BP_Mission_Research_Voxel_C
// Derives from: ABP_VoxelRock_C > ABP_VoxelResource_Base_C > AVoxelResource > AIcarusActor > AActor > UObject
// size 0x620, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Research_Voxel_C : public ABP_VoxelRock_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0618, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Research_Voxel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
