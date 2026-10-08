// /Game/ASS/CHA/PHX/Customization/WB_Cha_TempDebug.WB_Cha_TempDebug_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UWB_Cha_TempDebug_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BBVValue;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BMVValue;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BottomBSName;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LBVValue;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LeftBSName;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LMVValue;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RBVValue;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RightBSName_1;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RMVValue;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TBVValue;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TMVValue;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TopBSName;  // 0x02B8, size 0x8

    UFUNCTION(BlueprintCallable) void Update_Values(FText BottomBlendshapeValue, FText BottomMatrixValue, FText LeftBlendshapeValue, FText LeftMatrixValue, FText RightBlendshapeValue, FText RightMatrixValue, FText TopBlendshapeValue, FText TopMatrixValue, FText BottomShapeName, FText LeftShapeName, FText RightShapeName, FText TopShapeName);  // parameters 0x120, named "Update Values"
};
