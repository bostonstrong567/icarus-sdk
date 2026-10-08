// /Game/UI/Components/UMG_ConnectionFrame.UMG_ConnectionFrame_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ConnectionFrame_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DrawingFrame;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Size;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<F_Connections> Connections;  // 0x0278, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ConnectionFrame(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) void OnPaint(FPaintContext& Context) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void UpdateConnections(TArray<F_Connections>& Connections);  // parameters 0x10
};
