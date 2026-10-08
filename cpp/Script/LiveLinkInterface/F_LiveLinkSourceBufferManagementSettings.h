// /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// size 0x58, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkSourceSettings.h

USTRUCT()
struct FLiveLinkSourceBufferManagementSettings
{
    UPROPERTY(EditAnywhere) bool bValidEngineTimeEnabled;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float ValidEngineTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float EngineTimeOffset;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) double EngineTimeClockOffset;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) bool bGenerateSubFrame;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) FFrameRate DetectedFrameRate;  // 0x001C, size 0x8
    UPROPERTY(EditAnywhere) bool bUseTimecodeSmoothLatest;  // 0x0024, size 0x1
    UPROPERTY(EditAnywhere) FFrameRate SourceTimecodeFrameRate;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) bool bValidTimecodeFrameEnabled;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) int32 ValidTimecodeFrame;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float TimecodeFrameOffset;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) double TimecodeClockOffset;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) int32 LatestOffset;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxNumberOfFrameToBuffered;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) bool bKeepAtLeastOneFrame;  // 0x0050, size 0x1
};
