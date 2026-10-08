// /Game/ASS/CHA/Modifiers/FocusableAnimMetaData.FocusableAnimMetaData_C
// Derives from: UAnimMetaData > UObject
// size 0x2C, a blueprint class, blueprint

UCLASS(Const, EditInlineNew, Config=Engine)
class UFocusableAnimMetaData_C : public UAnimMetaData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FocusDelay;  // 0x0028, size 0x4
};
