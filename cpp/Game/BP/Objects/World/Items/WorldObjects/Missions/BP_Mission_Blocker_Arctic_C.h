// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Blocker_Arctic.BP_Mission_Blocker_Arctic_C
// Derives from: ABP_Mission_Blocker_Base_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x398, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Blocker_Arctic_C : public ABP_Mission_Blocker_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh3;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0390, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Blocker_Arctic(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
