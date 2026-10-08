// /Script/Engine.DialogueVoice
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Sound/DialogueVoice.h

UCLASS(EditInlineNew, MinimalAPI)
class UDialogueVoice : public UObject
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EGrammaticalGender> Gender;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EGrammaticalNumber> Plurality;  // 0x0029, size 0x1
    UPROPERTY() FGuid LocalizationGUID;  // 0x002C, size 0x10
};
