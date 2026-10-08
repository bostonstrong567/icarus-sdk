// /Script/MediaUtils.MediaPlayerOptions
// size 0x30, declared in Engine/Source/Runtime/MediaUtils/Public/MediaPlayerOptions.h

USTRUCT()
struct FMediaPlayerOptions
{
    UPROPERTY(BlueprintReadWrite) FMediaPlayerTrackOptions Tracks;  // 0x0000, size 0x1C
    UPROPERTY(BlueprintReadWrite) FTimespan SeekTime;  // 0x0020, size 0x8
    UPROPERTY(BlueprintReadWrite) EMediaPlayerOptionBooleanOverride PlayOnOpen;  // 0x0028, size 0x1
    UPROPERTY(BlueprintReadWrite) EMediaPlayerOptionBooleanOverride Loop;  // 0x0029, size 0x1
};
