// /Game/UI/Projection/Hunting/W_ProjectionWidget_Hunting.W_ProjectionWidget_Hunting_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionWidget_Hunting_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility AgeVisibility;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AgeTextVar;  // 0x02C0, size 0x18

    UFUNCTION() void ExecuteUbergraph_W_ProjectionWidget_Hunting(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TickWidget();
};
