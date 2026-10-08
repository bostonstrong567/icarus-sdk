// /Script/UMG.ComboBox
// Derives from: UWidget > UVisual > UObject
// size 0x140, declared in Engine/Source/Runtime/UMG/Public/Components/ComboBox.h

UCLASS()
class UComboBox : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> Items;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere) FGenerateWidgetForObject OnGenerateWidgetEvent;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsFocusable;  // 0x0128, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SComboBox<UObject *>,0> MyComboBox;  // 0x0130, protected
};
