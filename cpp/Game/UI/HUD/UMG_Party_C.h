// /Game/UI/HUD/UMG_Party.UMG_Party_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Party_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PartyList;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_0;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Found;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APlayerState* CurrentState;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideDetails;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugWidgets;  // 0x0289, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumDebugWidgets;  // 0x028C, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_Party(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
