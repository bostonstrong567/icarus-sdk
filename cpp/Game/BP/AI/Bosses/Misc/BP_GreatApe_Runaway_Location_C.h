// /Game/BP/AI/Bosses/Misc/BP_GreatApe_Runaway_Location.BP_GreatApe_Runaway_Location_C
// Derives from: AActor > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GreatApe_Runaway_Location_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* JumpStart_1;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* JumpBranchPoint_3;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* JumpTrunkPoint_2;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0240, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_GreatApe_Runaway_Location(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ProjectStartToNavMesh();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
