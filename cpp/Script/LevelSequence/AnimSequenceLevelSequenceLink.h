// /Script/LevelSequence.AnimSequenceLevelSequenceLink
// Derives from: UAssetUserData > UObject
// size 0x50, declared in Engine/Source/Runtime/LevelSequence/Public/AnimSequenceLevelSequenceLink.h

UCLASS(EditInlineNew)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
public:
    UPROPERTY() FGuid SkelTrackGuid;  // 0x0028, size 0x10
    UPROPERTY() FSoftObjectPath PathToLevelSequence;  // 0x0038, size 0x18
};
