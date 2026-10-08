// /Script/UMG.SizeBox
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x158, declared in Engine/Source/Runtime/UMG/Public/Components/SizeBox.h

UCLASS()
class USizeBox : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WidthOverride;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HeightOverride;  // 0x0134, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinDesiredWidth;  // 0x0138, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinDesiredHeight;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxDesiredWidth;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxDesiredHeight;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinAspectRatio;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxAspectRatio;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bOverride_WidthOverride : 1;  // 0x0150, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverride_HeightOverride : 1;  // 0x0150, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bOverride_MinDesiredWidth : 1;  // 0x0150, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bOverride_MinDesiredHeight : 1;  // 0x0150, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bOverride_MaxDesiredWidth : 1;  // 0x0150, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bOverride_MaxDesiredHeight : 1;  // 0x0150, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bOverride_MinAspectRatio : 1;  // 0x0150, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bOverride_MaxAspectRatio : 1;  // 0x0150, mask 0x80

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SBox,0> MySizeBox;  // 0x0120, protected

    UFUNCTION(BlueprintCallable) void ClearHeightOverride();
    UFUNCTION(BlueprintCallable) void ClearMaxAspectRatio();
    UFUNCTION(BlueprintCallable) void ClearMaxDesiredHeight();
    UFUNCTION(BlueprintCallable) void ClearMaxDesiredWidth();
    UFUNCTION(BlueprintCallable) void ClearMinAspectRatio();
    UFUNCTION(BlueprintCallable) void ClearMinDesiredHeight();
    UFUNCTION(BlueprintCallable) void ClearMinDesiredWidth();
    UFUNCTION(BlueprintCallable) void ClearWidthOverride();
    UFUNCTION(BlueprintCallable) void SetHeightOverride(float InHeightOverride);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMaxAspectRatio(float InMaxAspectRatio);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMaxDesiredHeight(float InMaxDesiredHeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMaxDesiredWidth(float InMaxDesiredWidth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinAspectRatio(float InMinAspectRatio);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinDesiredHeight(float InMinDesiredHeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinDesiredWidth(float InMinDesiredWidth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetWidthOverride(float InWidthOverride);  // parameters 0x4
};
