// /Script/LevelSequence.LevelSequenceAnimSequenceLink
// Derives from: UAssetUserData > UObject
// size 0x38, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceAnimSequenceLink.h

UCLASS(EditInlineNew)
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
public:
    UPROPERTY() TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;  // 0x0028, size 0x10
};
