// /Game/BP/Quests/Common/BPQ_Common_Snap_Deploy.BPQ_Common_Snap_Deploy_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Snap_Deploy_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHighlightableRowHandle Snap_Highlight_Override;  // 0x0470, size 0x18, named "Snap Highlight Override"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Snap_Preview_Static_Mesh;  // 0x0488, size 0x8, named "Snap Preview Static Mesh"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* Snap_Preview_Skeletal_Mesh;  // 0x0490, size 0x8, named "Snap Preview Skeletal Mesh"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* Snap_Preview_Skeletal_Mesh_Animation;  // 0x0498, size 0x8, named "Snap Preview Skeletal Mesh Animation"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Deployable;  // 0x04A0, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Snap_Deploy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeploy(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateQuestInvolvement();
};
