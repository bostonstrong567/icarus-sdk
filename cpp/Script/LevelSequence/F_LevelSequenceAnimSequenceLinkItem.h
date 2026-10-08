// /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
// size 0x30, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceAnimSequenceLink.h

USTRUCT()
struct FLevelSequenceAnimSequenceLinkItem
{
    UPROPERTY() FGuid SkelTrackGuid;  // 0x0000, size 0x10
    UPROPERTY() FSoftObjectPath PathToAnimSequence;  // 0x0010, size 0x18
    UPROPERTY() bool bExportTransforms;  // 0x0028, size 0x1
    UPROPERTY() bool bExportCurves;  // 0x0029, size 0x1
    UPROPERTY() bool bRecordInWorldSpace;  // 0x002A, size 0x1
};
