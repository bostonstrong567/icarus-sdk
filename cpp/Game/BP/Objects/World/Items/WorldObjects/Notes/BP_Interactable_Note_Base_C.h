// /Game/BP/Objects/World/Items/WorldObjects/Notes/BP_Interactable_Note_Base.BP_Interactable_Note_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Interactable_Note_Base_C : public ABP_DeployableBase_C, public ICollectableNoteInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sprites;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FCollectableNotesRowHandle NoteRow;  // 0x0738, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Note_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FCollectableNotesRowHandle GetNoteRowHandle();  // parameters 0x18
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_NoteRow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetNoteRowHandle(FCollectableNotesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateNote(FCollectableNotesRowHandle Note);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
