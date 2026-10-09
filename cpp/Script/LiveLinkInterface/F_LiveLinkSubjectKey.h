// /Script/LiveLinkInterface.LiveLinkSubjectKey
// size 0x18, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkTypes.h

USTRUCT()
struct FLiveLinkSubjectKey
{
public:
    UPROPERTY(BlueprintReadOnly) FGuid Source;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) FLiveLinkSubjectName SubjectName;  // 0x0010, size 0x8
};
