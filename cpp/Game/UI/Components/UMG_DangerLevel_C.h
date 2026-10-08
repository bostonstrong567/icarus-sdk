// /Game/UI/Components/UMG_DangerLevel.UMG_DangerLevel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DangerLevel_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Danger1;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Danger2;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Danger3;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Danger4;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UImage*> Images;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Tint_Color;  // 0x0298, size 0x28, named "Tint Color"

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DangerLevel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDanger(int32 Danger);  // parameters 0x4
};
