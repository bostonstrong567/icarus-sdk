// /Script/SubstanceCore.SubstanceOutputData
// Derives from: UObject
// size 0x58, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceOutputData.h

UCLASS()
class USubstanceOutputData : public UObject
{
public:
    UPROPERTY() UObject* ConnectedObject;  // 0x0028, size 0x8
    UPROPERTY() FMaterialParameterInfo ParamInfo;  // 0x0030, size 0x10
    UPROPERTY() USubstanceGraphInstance* ParentInstance;  // 0x0040, size 0x8
    UPROPERTY() FGuid CacheGuid;  // 0x0048, size 0x10
};
