// /Game/Assets/2DArt/UI/Loading/UMG_LoadingIcon.UMG_LoadingIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LoadingIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LoadingAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* base;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* borders;  // 0x0278, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_LoadingIcon(int32 EntryPoint);  // parameters 0x4
};
