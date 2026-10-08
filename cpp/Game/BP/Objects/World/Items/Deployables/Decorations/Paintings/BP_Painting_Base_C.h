// /Game/BP/Objects/World/Items/Deployables/Decorations/Paintings/BP_Painting_Base.BP_Painting_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x758, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Painting_Base_C : public ABP_DeployableBase_C, public IPaintingRecorderInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget_PaintingDisplay;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FPaintingsRowHandle PaintingRow;  // 0x0740, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Painting_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FPaintingsRowHandle GetPaintingImageRow() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnRep_PaintingRow();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void SetPaintingImage(const FPaintingsRowHandle& PaintingRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateImage(FPaintingsRowHandle PaintingRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdatePaintingDisplay();
};
