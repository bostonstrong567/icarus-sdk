// /Game/UI/Components/UMG_DeployableResource_State.UMG_DeployableResource_State_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DeployableResource_State_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Background;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Crossout;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResourceName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ResourceTypeIcon;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Icon;  // 0x02A0, size 0x88

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DeployableResource_State(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVisualState(bool Active);  // parameters 0x1
};
