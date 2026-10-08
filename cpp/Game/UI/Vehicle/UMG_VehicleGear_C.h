// /Game/UI/Vehicle/UMG_VehicleGear.UMG_VehicleGear_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x27D, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_VehicleGear_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* GearText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SelectedImage;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Gear;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Selected;  // 0x027C, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_VehicleGear(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelected(bool Selected);  // parameters 0x1
};
