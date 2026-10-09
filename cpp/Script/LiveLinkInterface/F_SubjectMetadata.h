// /Script/LiveLinkInterface.SubjectMetadata
// size 0x70, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h

USTRUCT()
struct FSubjectMetadata
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, FString> StringMetadata;  // 0x0000, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimecode SceneTimecode;  // 0x0050, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameRate SceneFramerate;  // 0x0064, size 0x8
};
