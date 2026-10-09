// /Script/LiveLinkInterface.LiveLinkMetaData
// size 0x60, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkTypes.h

USTRUCT()
struct FLiveLinkMetaData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, FString> StringMetaData;  // 0x0000, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQualifiedFrameTime SceneTime;  // 0x0050, size 0x10
};
