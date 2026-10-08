// /Game/BP/AI/Bosses/Misc/BP_GreatApe_JumpPoint.BP_GreatApe_JumpPoint_C
// Derives from: AActor > UObject
// size 0x251, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GreatApe_JumpPoint_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* JumpBranchPoint_3A;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* JumpBranchPoint_3B;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* JumpStart_1;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* JumpTrunkPoint_2;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowConnections;  // 0x0250, size 0x1

    UFUNCTION(BlueprintCallable) void DrawTreeDebugLines();
    UFUNCTION() void ExecuteUbergraph_BP_GreatApe_JumpPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Project_Start_to_Nav_Mesh();  // named "Project Start to Nav Mesh"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
