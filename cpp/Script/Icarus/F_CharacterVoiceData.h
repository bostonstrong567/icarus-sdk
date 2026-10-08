// /Script/Icarus.CharacterVoiceData
// size 0x38, declared in Icarus/Source/Icarus/DataStructs/Audio/CharacterVoiceData.h

USTRUCT()
struct FCharacterVoiceData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGlobalPlayerCharacterVoiceFMODParam VoiceFMODParam;  // 0x0030, size 0x1
};
