// /Script/MediaUtils.MediaPlayerTrackOptions
// size 0x1C, declared in Engine/Source/Runtime/MediaUtils/Public/MediaPlayerOptions.h

USTRUCT()
struct FMediaPlayerTrackOptions
{
public:
    UPROPERTY(BlueprintReadWrite) int32 Audio;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Caption;  // 0x0004, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Metadata;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Script;  // 0x000C, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Subtitle;  // 0x0010, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Text;  // 0x0014, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Video;  // 0x0018, size 0x4
};
