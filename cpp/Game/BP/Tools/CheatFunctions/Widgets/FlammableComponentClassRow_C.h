// /Game/BP/Tools/CheatFunctions/Widgets/FlammableComponentClassRow.FlammableComponentClassRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UFlammableComponentClassRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ClassName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UFlammableComponent> Class;  // 0x0288, size 0x8

    UFUNCTION() void ExecuteUbergraph_FlammableComponentClassRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetClass(TSubclassOf<UFlammableComponent> FlammableClass);  // parameters 0x8
};
