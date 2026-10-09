// /Script/SubstanceCore.SubstanceInstanceFactory
// Derives from: UObject
// size 0x98, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceInstanceFactory.h

UCLASS()
class USubstanceInstanceFactory : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    std::shared_ptr<SubstanceAir::PackageDesc> SubstancePackage;  // 0x0048, not reflected
    PackageDescData mPackageUserData;  // 0x0058, not reflected
    UPROPERTY() FString RelativeSourceFilePath;  // 0x0060, size 0x10
    UPROPERTY() FString AbsoluteSourceFilePath;  // 0x0070, size 0x10
    UPROPERTY() FString SourceFileTimestamp;  // 0x0080, size 0x10
    UPROPERTY() TEnumAsByte<ESubstanceGenerationMode> GenerationMode;  // 0x0090, size 0x1
private:
    UPROPERTY() TArray<USubstanceGraphInstance*> mGraphInstances;  // 0x0028, size 0x10
    TArray<FSubstanceGraphDesc,TSizedDefaultAllocator<32> > mGraphDescs;  // 0x0038, not reflected
public:
    UFUNCTION(BlueprintCallable) USubstanceGraphInstance* CreateGraphInstance(FSubstanceGraphDesc GraphDesc, FString PackageName);  // parameters 0x90
    UFUNCTION(BlueprintCallable) TArray<FSubstanceGraphDesc> GetGraphDescs();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<USubstanceGraphInstance*> GetGraphInstances();  // parameters 0x10
};
