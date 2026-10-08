// /Script/SubstanceCore.SubstanceInstanceFactory
// Derives from: UObject
// size 0x98, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceInstanceFactory.h

UCLASS()
class USubstanceInstanceFactory : public UObject
{
public:
    UPROPERTY() TArray<USubstanceGraphInstance*> mGraphInstances;  // 0x0028, size 0x10
    UPROPERTY() FString RelativeSourceFilePath;  // 0x0060, size 0x10
    UPROPERTY() FString AbsoluteSourceFilePath;  // 0x0070, size 0x10
    UPROPERTY() FString SourceFileTimestamp;  // 0x0080, size 0x10
    UPROPERTY() TEnumAsByte<ESubstanceGenerationMode> GenerationMode;  // 0x0090, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TArray<FSubstanceGraphDesc,TSizedDefaultAllocator<32> > mGraphDescs;  // 0x0038, private
    std::shared_ptr<SubstanceAir::PackageDesc> SubstancePackage;  // 0x0048
    PackageDescData mPackageUserData;  // 0x0058

    UFUNCTION(BlueprintCallable) USubstanceGraphInstance* CreateGraphInstance(FSubstanceGraphDesc GraphDesc, FString PackageName);  // parameters 0x90
    UFUNCTION(BlueprintCallable) TArray<FSubstanceGraphDesc> GetGraphDescs();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<USubstanceGraphInstance*> GetGraphInstances();  // parameters 0x10
};
