// /Script/Engine.TextRenderComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4A0, declared in Engine/Source/Runtime/Engine/Classes/Components/TextRenderComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UTextRenderComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText Text;  // 0x0450, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* TextMaterial;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFont* Font;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizTextAligment> HorizontalAlignment;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalTextAligment> VerticalAlignment;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor TextRenderColor;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float XScale;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float YScale;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WorldSize;  // 0x0488, size 0x4
    UPROPERTY() float InvDefaultSize;  // 0x048C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HorizSpacingAdjust;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VertSpacingAdjust;  // 0x0494, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAlwaysRenderAsText : 1;  // 0x0498, mask 0x01

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTextLocalSize() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTextWorldSize() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void K2_SetText(const FText& Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetFont(UFont* Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetHorizSpacingAdjust(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetText(FString Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetTextMaterial(UMaterialInterface* Material);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTextRenderColor(FColor Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVertSpacingAdjust(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWorldSize(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetXScale(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetYScale(float Value);  // parameters 0x4
};
